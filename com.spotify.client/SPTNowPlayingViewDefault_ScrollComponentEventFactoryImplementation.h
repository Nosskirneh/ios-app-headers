//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingViewDefault_ScrollComponentEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTNowPlayingViewDefault_ScrollComponentEventFactoryImplementation : NSObject <SPTNowPlayingViewDefault_ScrollComponentEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)impression;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

