//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAutoplayEvent1 : SPTLogMessage
{
    NSString *_typeValue;
    NSString *_seedEntityValue;
    long long _offlineValue;
    long long _forcedOfflineValue;
    long long _activeConnectionTypeValue;
    long long _datasaverSettingValue;
    long long _offlineListsCountValue;
    long long _sessionEventCountValue;
    long long _deviceFreeSpaceMBValue;
}

+ (id)messageWithType:(id)arg1 seedEntity:(id)arg2 offline:(long long)arg3 forcedOffline:(long long)arg4 activeConnectionType:(long long)arg5 datasaverSetting:(long long)arg6 offlineListsCount:(long long)arg7 sessionEventCount:(long long)arg8 deviceFreeSpaceMB:(long long)arg9;
@property(nonatomic) long long deviceFreeSpaceMBValue; // @synthesize deviceFreeSpaceMBValue=_deviceFreeSpaceMBValue;
@property(nonatomic) long long sessionEventCountValue; // @synthesize sessionEventCountValue=_sessionEventCountValue;
@property(nonatomic) long long offlineListsCountValue; // @synthesize offlineListsCountValue=_offlineListsCountValue;
@property(nonatomic) long long datasaverSettingValue; // @synthesize datasaverSettingValue=_datasaverSettingValue;
@property(nonatomic) long long activeConnectionTypeValue; // @synthesize activeConnectionTypeValue=_activeConnectionTypeValue;
@property(nonatomic) long long forcedOfflineValue; // @synthesize forcedOfflineValue=_forcedOfflineValue;
@property(nonatomic) long long offlineValue; // @synthesize offlineValue=_offlineValue;
@property(retain, nonatomic) NSString *seedEntityValue; // @synthesize seedEntityValue=_seedEntityValue;
@property(retain, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

