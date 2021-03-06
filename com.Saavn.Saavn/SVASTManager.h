//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDAASTManager.h"

@interface SVASTManager : SDAASTManager
{
    _Bool _isVast;
    _Bool _isUpdateSlot;
    _Bool _isFallback;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isFallback; // @synthesize isFallback=_isFallback;
@property(nonatomic) _Bool isUpdateSlot; // @synthesize isUpdateSlot=_isUpdateSlot;
@property(nonatomic) _Bool isVast; // @synthesize isVast=_isVast;
- (void)consumeProgress:(long long)arg1;
- (void)handleRedirect:(id)arg1 withDict:(id)arg2;
- (void)parseDispay:(id)arg1;
- (void)handleVastParams:(id)arg1;
- (void)assingVideo:(id)arg1;
- (void)assignMedia:(id)arg1;
- (id)getVideoConfig;
- (id)getMediaConfig;
- (void)parseMedia:(id)arg1;
- (void)parseVastResp:(id)arg1 withFallback:(_Bool)arg2;
- (void)parseVastRespAndUpdateCurrentSlot:(id)arg1;
- (_Bool)isConfigOnlyVast;
- (void)resetAllVastParams;
- (void)fetchWrapper:(id)arg1;
- (id)init;

@end

