//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastViewModelSection-Protocol.h"

@class NSString;

@interface SPTPodcastDescriptionViewModel : NSObject <SPTPodcastViewModelSection>
{
    double _headerHeight;
    NSString *_descriptionText;
}

@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)configureDescriptionTextForPodcast:(id)arg1;
- (long long)identifier;
- (void)updateWithPodcastPlayer:(id)arg1;
- (void)updateWithPodcast:(id)arg1;
- (id)header;
- (id)footer;
- (unsigned long long)numberOfRows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

