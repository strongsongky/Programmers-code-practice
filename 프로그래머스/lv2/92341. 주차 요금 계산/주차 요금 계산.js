function solution(fees, records) {
    const [BASIC_TIME, BASIC_FEE, UNIT_TIME, UNIT_FEE] = fees;
    const AUTO_OUT_TIME = 60 * 24 - 1;
    const parkInfo = {};
    
    records.forEach(str => {
        const strings = str.split(' ');
        const [hour, minute] = strings[0].split(':').map(Number);
        const time = hour * 60 + minute;
        const number = +strings[1];
        const isIn = strings[2] === 'IN';
        
        if (!parkInfo[number]) {
            parkInfo[number] = {
                inTime: 0,
                time: 0,
                isOut: true
            };
        }
        
        const info = parkInfo[number];
        
        if (isIn) {
            info.inTime = time; 
        } else {
            info.time += time - info.inTime;
        }
        
        info.isOut = !info.isOut;
    });
    
    const sortedInfo = Object
        .entries(parkInfo)
        .sort((a, b) => a[0] - b[0])
        .map(([, value]) => value);
    
    sortedInfo.forEach((info) => {
        if (!info.isOut) {
            info.time += AUTO_OUT_TIME - info.inTime;
        }
    });
    
    const calculateFee = ({ time }) => {
        if (time <= BASIC_TIME) {
            return BASIC_FEE;
        }
        return BASIC_FEE + Math.ceil((time - BASIC_TIME) / UNIT_TIME) * UNIT_FEE;
    };
    
    return sortedInfo.map(calculateFee);
}