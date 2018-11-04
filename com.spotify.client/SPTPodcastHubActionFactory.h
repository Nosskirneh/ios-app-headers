//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBActionFactory.h"

@interface SPTPodcastHubActionFactory : NSObject <HUBActionFactory>
{
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
- (void).cxx_destruct;
- (id)createActionForName:(id)arg1;
- (id)initWithPodcastFeature:(id)arg1 logCenter:(id)arg2;

@end

