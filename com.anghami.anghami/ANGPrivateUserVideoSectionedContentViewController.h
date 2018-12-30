//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

@class NSMutableArray;

@interface ANGPrivateUserVideoSectionedContentViewController : ANGSectionedContentViewController
{
    NSMutableArray *_userVideos;
}

- (void).cxx_destruct;
- (_Bool)availableInOfflineMode;
- (id)privateHeaderView;
- (_Bool)headerBackgroundGradientViewVisible;
- (void)loadServerData;
- (void)updateContentSectionFromCache:(id)arg1;
- (void)generateUserVideosFromCache;
@property(readonly) NSMutableArray *userVideos;
- (void)generateSectionFromLocalVideos;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
