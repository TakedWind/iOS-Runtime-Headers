/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularPmicHwStats : PBCodable <NSCopying> {
    unsigned int  _activeDurMs;
    unsigned int  _durationMs;
    unsigned int  _gsmCa5ActiveDurMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int activeDurMs : 1; 
        unsigned int durationMs : 1; 
        unsigned int gsmCa5ActiveDurMs : 1; 
        unsigned int highVoltActiveDurMs : 1; 
        unsigned int lowVoltActiveDurMs : 1; 
        unsigned int lteActiveDurMs : 1; 
        unsigned int midVoltActiveDurMs : 1; 
        unsigned int sleepDurMs : 1; 
        unsigned int sleepEntryCount : 1; 
        unsigned int tdscdmaActiveDurMs : 1; 
        unsigned int wcdmaActiveDurMs : 1; 
    }  _has;
    unsigned int  _highVoltActiveDurMs;
    unsigned int  _lowVoltActiveDurMs;
    unsigned int  _lteActiveDurMs;
    unsigned int  _midVoltActiveDurMs;
    unsigned int  _sleepDurMs;
    unsigned int  _sleepEntryCount;
    unsigned int  _tdscdmaActiveDurMs;
    unsigned long long  _timestamp;
    unsigned int  _wcdmaActiveDurMs;
}

@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned int gsmCa5ActiveDurMs;
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasGsmCa5ActiveDurMs;
@property (nonatomic) BOOL hasHighVoltActiveDurMs;
@property (nonatomic) BOOL hasLowVoltActiveDurMs;
@property (nonatomic) BOOL hasLteActiveDurMs;
@property (nonatomic) BOOL hasMidVoltActiveDurMs;
@property (nonatomic) BOOL hasSleepDurMs;
@property (nonatomic) BOOL hasSleepEntryCount;
@property (nonatomic) BOOL hasTdscdmaActiveDurMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWcdmaActiveDurMs;
@property (nonatomic) unsigned int highVoltActiveDurMs;
@property (nonatomic) unsigned int lowVoltActiveDurMs;
@property (nonatomic) unsigned int lteActiveDurMs;
@property (nonatomic) unsigned int midVoltActiveDurMs;
@property (nonatomic) unsigned int sleepDurMs;
@property (nonatomic) unsigned int sleepEntryCount;
@property (nonatomic) unsigned int tdscdmaActiveDurMs;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int wcdmaActiveDurMs;

- (unsigned int)activeDurMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationMs;
- (unsigned int)gsmCa5ActiveDurMs;
- (BOOL)hasActiveDurMs;
- (BOOL)hasDurationMs;
- (BOOL)hasGsmCa5ActiveDurMs;
- (BOOL)hasHighVoltActiveDurMs;
- (BOOL)hasLowVoltActiveDurMs;
- (BOOL)hasLteActiveDurMs;
- (BOOL)hasMidVoltActiveDurMs;
- (BOOL)hasSleepDurMs;
- (BOOL)hasSleepEntryCount;
- (BOOL)hasTdscdmaActiveDurMs;
- (BOOL)hasTimestamp;
- (BOOL)hasWcdmaActiveDurMs;
- (unsigned int)hash;
- (unsigned int)highVoltActiveDurMs;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lowVoltActiveDurMs;
- (unsigned int)lteActiveDurMs;
- (void)mergeFrom:(id)arg1;
- (unsigned int)midVoltActiveDurMs;
- (BOOL)readFrom:(id)arg1;
- (void)setActiveDurMs:(unsigned int)arg1;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setGsmCa5ActiveDurMs:(unsigned int)arg1;
- (void)setHasActiveDurMs:(BOOL)arg1;
- (void)setHasDurationMs:(BOOL)arg1;
- (void)setHasGsmCa5ActiveDurMs:(BOOL)arg1;
- (void)setHasHighVoltActiveDurMs:(BOOL)arg1;
- (void)setHasLowVoltActiveDurMs:(BOOL)arg1;
- (void)setHasLteActiveDurMs:(BOOL)arg1;
- (void)setHasMidVoltActiveDurMs:(BOOL)arg1;
- (void)setHasSleepDurMs:(BOOL)arg1;
- (void)setHasSleepEntryCount:(BOOL)arg1;
- (void)setHasTdscdmaActiveDurMs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWcdmaActiveDurMs:(BOOL)arg1;
- (void)setHighVoltActiveDurMs:(unsigned int)arg1;
- (void)setLowVoltActiveDurMs:(unsigned int)arg1;
- (void)setLteActiveDurMs:(unsigned int)arg1;
- (void)setMidVoltActiveDurMs:(unsigned int)arg1;
- (void)setSleepDurMs:(unsigned int)arg1;
- (void)setSleepEntryCount:(unsigned int)arg1;
- (void)setTdscdmaActiveDurMs:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWcdmaActiveDurMs:(unsigned int)arg1;
- (unsigned int)sleepDurMs;
- (unsigned int)sleepEntryCount;
- (unsigned int)tdscdmaActiveDurMs;
- (unsigned long long)timestamp;
- (unsigned int)wcdmaActiveDurMs;
- (void)writeTo:(id)arg1;

@end
