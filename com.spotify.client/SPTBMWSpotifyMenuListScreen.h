//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBMWListScreen-Protocol.h"

@class NSArray, NSString;
@protocol SPTBMWListScreenDelegate, SPTExternalIntegrationContent, SPTExternalIntegrationPlatform;

@interface SPTBMWSpotifyMenuListScreen : NSObject <SPTBMWListScreen>
{
    _Bool _didLoadContent;
    id <SPTBMWListScreenDelegate> _delegate;
    unsigned long long _level;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    NSArray *_content;
}

@property(nonatomic) _Bool didLoadContent; // @synthesize didLoadContent=_didLoadContent;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) __weak id <SPTBMWListScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)update:(CDUnknownBlockType)arg1;
- (id)titleForGroupIndex:(long long)arg1;
- (id)titleForLine:(long long)arg1 row:(long long)arg2 groupIndex:(long long)arg3;
- (long long)targetScreenIndexForRow:(long long)arg1 groupIndex:(long long)arg2;
- (void)selectedRow:(long long)arg1 groupIndex:(long long)arg2;
- (unsigned long long)numberOfItemsForGroupIndex:(unsigned long long)arg1;
- (id)imageForRow:(long long)arg1 groupIndex:(long long)arg2 preferredSize:(struct CGSize)arg3;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> containerContent;
@property(readonly, nonatomic) _Bool canProvideDataImmediately;
@property(readonly, nonatomic) NSString *loadingTitle;
@property(readonly, nonatomic) NSString *emptyListTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long groupCount;
- (id)initWithexternalIntegrationPlatform:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

