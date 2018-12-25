//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, ULRIdentity;

@interface ULRReportingResponsibility : NSObject
{
    ULRIdentity *_identity;
    NSString *_identifyingURLScheme;
    NSDate *_lastActivity;
    NSDate *_lastForegroundActivity;
    long long _libraryLevel;
    long long _collectionStrategy;
    NSDictionary *_keychainMetadata;
    NSDictionary *_keychainEntry;
    long long _bleScannerCapable;
    long long _motionActivityCapable;
}

+ (id)collectionStrategyStringForStrategy:(long long)arg1;
+ (id)sensorCapabilityStringForCapability:(long long)arg1;
@property(readonly, nonatomic) long long motionActivityCapable; // @synthesize motionActivityCapable=_motionActivityCapable;
@property(readonly, nonatomic) long long bleScannerCapable; // @synthesize bleScannerCapable=_bleScannerCapable;
@property(readonly, nonatomic) NSDictionary *keychainEntry; // @synthesize keychainEntry=_keychainEntry;
@property(readonly, nonatomic) NSDictionary *keychainMetadata; // @synthesize keychainMetadata=_keychainMetadata;
@property(readonly, nonatomic) long long collectionStrategy; // @synthesize collectionStrategy=_collectionStrategy;
@property(readonly, nonatomic) long long libraryLevel; // @synthesize libraryLevel=_libraryLevel;
@property(readonly, nonatomic) NSDate *lastForegroundActivity; // @synthesize lastForegroundActivity=_lastForegroundActivity;
@property(readonly, nonatomic) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
@property(readonly, nonatomic) NSString *identifyingURLScheme; // @synthesize identifyingURLScheme=_identifyingURLScheme;
@property(readonly, nonatomic) ULRIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)arg1 identifyingURLScheme:(id)arg2 lastActivity:(id)arg3 lastForegroundActivity:(id)arg4 libraryLevel:(long long)arg5 bleScannerCapable:(long long)arg6 motionActivityCapable:(long long)arg7 keychainMetadata:(id)arg8 keychainEntry:(id)arg9 collectionStrategy:(long long)arg10;

@end

