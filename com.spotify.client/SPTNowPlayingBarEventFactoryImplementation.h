//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingBarEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTNowPlayingBarEventFactoryImplementation : NSObject <SPTNowPlayingBarEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitUiReveal;
- (id)swipeSkipToNextWithItemToBeSkipped:(id)arg1;
- (id)swipeSkipToPreviousWithItemToBeSkipped:(id)arg1;
- (id)swipeUiReveal;
- (id)heartButtonFactory;
- (id)playButtonFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

