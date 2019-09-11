//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate, SPTOnDemandSet;

@interface SPTPodcastEpisodeFeaturedContentContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)prefixForURI:(id)arg1;
- (_Bool)isOnDemandSet:(id)arg1;
- (id)createPlayer:(id)arg1 trackUri:(id)arg2;
- (void)addRightAccessoryClick:(id)arg1 trackUri:(id)arg2;
- (void)replaceClickEvent:(id)arg1 trackUri:(id)arg2;
- (void)updateSubtitlePrefixIfNeeded:(id)arg1 trackUri:(id)arg2;
- (void)buildOnDemandSetComponents:(id)arg1 uri:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithOnDemandSet:(id)arg1;

@end

