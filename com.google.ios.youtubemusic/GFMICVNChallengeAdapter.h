//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, GWAPurchaseManager;

@interface GFMICVNChallengeAdapter : NSObject
{
    _Bool _isPresenting;
    GIMMe *_gimme;
    GWAPurchaseManager *_purchaseManager;
}

@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(retain, nonatomic) GWAPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (CDUnknownBlockType)completionHandlerToPromise:(id)arg1;
- (id)presentCVNChallengeOverViewController:(id)arg1 withInstrumentChallengeToken:(id)arg2;

@end

