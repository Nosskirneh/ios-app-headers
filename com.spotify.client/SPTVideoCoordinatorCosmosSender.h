//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTResolver;

@interface SPTVideoCoordinatorCosmosSender : NSObject
{
    id <SPTResolver> _resolver;
}

@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 toCPEndpoint:(id)arg2 withRequestAction:(id)arg3;
- (void)postMessage:(id)arg1 toCPEndpoint:(id)arg2;
- (void)putMessage:(id)arg1 toCPEndpoint:(id)arg2;
- (void)sendErrorMessage:(id)arg1;
- (void)sendPreferredSubtitleMessage:(id)arg1;
- (void)sendStateMessage:(id)arg1;
- (void)sendAdvanceMessage:(id)arg1;
- (id)initWithResolver:(id)arg1;

@end

