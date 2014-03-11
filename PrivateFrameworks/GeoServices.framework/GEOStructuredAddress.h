/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSMutableArray *_areaOfInterests;
    NSString *_country;
    NSString *_countryCode;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    } _geoIds;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCode;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_premise;
    NSString *_premises;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

@property(retain) NSString * administrativeArea;
@property(retain) NSString * administrativeAreaCode;
@property(retain) NSMutableArray * areaOfInterests;
@property(retain) NSString * country;
@property(retain) NSString * countryCode;
@property(retain) NSMutableArray * dependentLocalitys;
@property(retain) NSString * fullThoroughfare;
@property(readonly) long long* geoIds;
@property(readonly) unsigned int geoIdsCount;
@property(readonly) BOOL hasAdministrativeArea;
@property(readonly) BOOL hasAdministrativeAreaCode;
@property(readonly) BOOL hasCountry;
@property(readonly) BOOL hasCountryCode;
@property(readonly) BOOL hasFullThoroughfare;
@property(readonly) BOOL hasInlandWater;
@property(readonly) BOOL hasLocality;
@property(readonly) BOOL hasOcean;
@property(readonly) BOOL hasPostCode;
@property(readonly) BOOL hasPostCodeExtension;
@property(readonly) BOOL hasPostCodeFull;
@property(readonly) BOOL hasPremise;
@property(readonly) BOOL hasPremises;
@property(readonly) BOOL hasSubAdministrativeArea;
@property(readonly) BOOL hasSubLocality;
@property(readonly) BOOL hasSubThoroughfare;
@property(readonly) BOOL hasThoroughfare;
@property(retain) NSString * inlandWater;
@property(retain) NSString * locality;
@property(retain) NSString * ocean;
@property(retain) NSString * postCode;
@property(retain) NSString * postCodeExtension;
@property(retain) NSString * postCodeFull;
@property(retain) NSString * premise;
@property(retain) NSString * premises;
@property(retain) NSString * subAdministrativeArea;
@property(retain) NSString * subLocality;
@property(retain) NSMutableArray * subPremises;
@property(retain) NSString * subThoroughfare;
@property(retain) NSString * thoroughfare;

- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)addDependentLocality:(id)arg1;
- (void)addGeoId:(long long)arg1;
- (void)addSubPremise:(id)arg1;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areaOfInterestAtIndex:(unsigned int)arg1;
- (id)areaOfInterests;
- (unsigned int)areaOfInterestsCount;
- (void)clearAreaOfInterests;
- (void)clearDependentLocalitys;
- (void)clearGeoIds;
- (void)clearSubPremises;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryCode;
- (void)dealloc;
- (id)dependentLocalityAtIndex:(unsigned int)arg1;
- (id)dependentLocalitys;
- (unsigned int)dependentLocalitysCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullThoroughfare;
- (long long)geoIdAtIndex:(unsigned int)arg1;
- (long long*)geoIds;
- (unsigned int)geoIdsCount;
- (BOOL)hasAdministrativeArea;
- (BOOL)hasAdministrativeAreaCode;
- (BOOL)hasCountry;
- (BOOL)hasCountryCode;
- (BOOL)hasFullThoroughfare;
- (BOOL)hasInlandWater;
- (BOOL)hasLocality;
- (BOOL)hasOcean;
- (BOOL)hasPostCode;
- (BOOL)hasPostCodeExtension;
- (BOOL)hasPostCodeFull;
- (BOOL)hasPremise;
- (BOOL)hasPremises;
- (BOOL)hasSubAdministrativeArea;
- (BOOL)hasSubLocality;
- (BOOL)hasSubThoroughfare;
- (BOOL)hasThoroughfare;
- (unsigned int)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)inlandWater;
- (BOOL)isEqual:(id)arg1;
- (id)locality;
- (id)ocean;
- (id)postCode;
- (id)postCodeExtension;
- (id)postCodeFull;
- (id)premise;
- (id)premises;
- (BOOL)readFrom:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreaOfInterests:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDependentLocalitys:(id)arg1;
- (void)setFullThoroughfare:(id)arg1;
- (void)setGeoIds:(long long*)arg1 count:(unsigned int)arg2;
- (void)setInlandWater:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setPostCode:(id)arg1;
- (void)setPostCodeExtension:(id)arg1;
- (void)setPostCodeFull:(id)arg1;
- (void)setPremise:(id)arg1;
- (void)setPremises:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubPremises:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subPremiseAtIndex:(unsigned int)arg1;
- (id)subPremises;
- (unsigned int)subPremisesCount;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;

@end