//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdInnerTubeConfig-Protocol.h"

@class GIMMe, NSString, YTIForceAdParameters, YTUserDefaults;

@interface YTRealAdInnerTubeConfig : NSObject <YTAdInnerTubeConfig>
{
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)activeForcedHomepageAdURLs;
- (id)forcedHomepageAdType;
- (id)forcedHomepageAdURL;
@property(readonly, nonatomic) YTIForceAdParameters *instreamForcedAdParameters;
@property(readonly, nonatomic) YTIForceAdParameters *watchNextForceAdParameters;
@property(readonly, nonatomic) YTIForceAdParameters *searchForceAdParameters;
@property(readonly, nonatomic) YTIForceAdParameters *browseForceAdParameters;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

