//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReachabilityOverrideConfig-Protocol.h"

@class GIMMe, NSString;

@interface YTDefaultReachabilityOverrideConfig : NSObject <YTReachabilityOverrideConfig>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)clearConnectionTypeOverride;
- (void)setConnectionTypeOverride:(int)arg1;
- (int)connectionTypeOverride;
- (_Bool)hasConnectionTypeOverride;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

