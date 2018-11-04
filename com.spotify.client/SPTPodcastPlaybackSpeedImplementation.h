//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPodcastPlaybackSpeed.h"

@class NSNumber, NSString;

@interface SPTPodcastPlaybackSpeedImplementation : NSObject <SPTPodcastPlaybackSpeed>
{
    unsigned long long _option;
}

+ (id)playbackSpeedFromValue:(id)arg1;
+ (id)allAvailablePlaybackSpeeds;
@property(nonatomic) unsigned long long option; // @synthesize option=_option;
@property(readonly, nonatomic) NSString *translation;
@property(readonly, nonatomic) NSNumber *value;
- (id)iconImageWithSize:(struct CGSize)arg1 theme:(id)arg2;
- (long long)icon;
- (id)initWithSpeedOption:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

