//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface ULRIdentityIndex : NSObject
{
    NSMutableDictionary *_lhStatebyUserID;
    NSMutableDictionary *_lrStatebyUserID;
    NSSet *_reportableIdentities;
    NSSet *_reportingIdentities;
    NSSet *_responsibleIdentities;
}

+ (id)sharedIndex;
@property(retain) NSSet *responsibleIdentities; // @synthesize responsibleIdentities=_responsibleIdentities;
@property(retain) NSSet *reportingIdentities; // @synthesize reportingIdentities=_reportingIdentities;
@property(retain) NSSet *reportableIdentities; // @synthesize reportableIdentities=_reportableIdentities;
- (void).cxx_destruct;
- (void)setLRState:(long long)arg1 forIdentity:(id)arg2;
- (void)setLHState:(long long)arg1 forIdentity:(id)arg2;
- (long long)locationReportingStateForIdentity:(id)arg1;
- (long long)locationHistoryStateForIdentity:(id)arg1;
- (id)init;

@end

