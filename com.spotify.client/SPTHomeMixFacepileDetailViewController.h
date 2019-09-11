//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class GLUEEntityCardView, GLUEGradientView, NSString, NSURL, SPTHomeMixFacepileDetailCellConfigurator, SPTHomeMixFamilyPileConfigurator, SPTHomeMixGlueTheme, SPTHomeMixTrackViewModel, SPTTableView;
@protocol GLUEImageLoader, SPTPageContainer;

@interface SPTHomeMixFacepileDetailViewController : UIViewController <SPTPageController>
{
    SPTHomeMixTrackViewModel *_trackViewModel;
    SPTHomeMixFamilyPileConfigurator *_facePilesConfigurator;
    id <GLUEImageLoader> _imageLoader;
    SPTHomeMixGlueTheme *_theme;
    SPTTableView *_tableView;
    GLUEGradientView *_gradientView;
    SPTHomeMixFacepileDetailCellConfigurator *_cellConfigurator;
    GLUEEntityCardView *_albumHeaderView;
}

@property(retain, nonatomic) GLUEEntityCardView *albumHeaderView; // @synthesize albumHeaderView=_albumHeaderView;
@property(retain, nonatomic) SPTHomeMixFacepileDetailCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTHomeMixFamilyPileConfigurator *facePilesConfigurator; // @synthesize facePilesConfigurator=_facePilesConfigurator;
@property(readonly, nonatomic) SPTHomeMixTrackViewModel *trackViewModel; // @synthesize trackViewModel=_trackViewModel;
- (void).cxx_destruct;
- (void)updateHeader;
- (void)setupConstraints;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewDidLoad;
- (id)initWithTrack:(id)arg1 facePilesConfigurator:(id)arg2 imageLoader:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

