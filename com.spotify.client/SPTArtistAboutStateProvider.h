//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SPTArtistAboutImage, SPTArtistAboutViewModel;
@protocol SPTModerationServiceState;

@interface SPTArtistAboutStateProvider : NSObject
{
    SPTArtistAboutImage *_displayedGalleryImage;
    SPTArtistAboutViewModel *_viewModel;
    id <SPTModerationServiceState> _moderationServiceState;
}

@property(nonatomic) __weak id <SPTModerationServiceState> moderationServiceState; // @synthesize moderationServiceState=_moderationServiceState;
@property(retain, nonatomic) SPTArtistAboutViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) SPTArtistAboutImage *displayedGalleryImage; // @synthesize displayedGalleryImage=_displayedGalleryImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isModerationEnabled;
@property(readonly, nonatomic) NSURL *artistUri;
@property(readonly, nonatomic) NSString *artistName;
- (id)initWithViewModel:(id)arg1 moderationServiceState:(id)arg2;

@end

