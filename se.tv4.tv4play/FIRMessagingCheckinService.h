//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIRMessagingCheckinService : NSObject
{
    id _checkinPreferences;
}

@property(retain, nonatomic) id checkinPreferences; // @synthesize checkinPreferences=_checkinPreferences;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasValidCheckinInfo;
- (id)digest;
@property(readonly, nonatomic) NSString *versionInfo;
@property(readonly, nonatomic) NSString *secretToken;
@property(readonly, nonatomic) NSString *deviceAuthID;
- (_Bool)tryToLoadPrefetchedCheckinPreferences;

@end

