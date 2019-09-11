//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"

@class GLUEGradientView, NSString, NSURL, SPTHomeMixFamilyPileConfigurator, SPTHomeMixGlueTheme, SPTHomeMixUserToggleCellConfigurator, SPTHomeMixUserToggleViewModel, SPTTableView;
@protocol SPTPageContainer;

@interface SPTHomeMixUserToggleViewController : UIViewController <SPTPageController>
{
    SPTHomeMixUserToggleViewModel *_model;
    SPTHomeMixGlueTheme *_theme;
    SPTHomeMixFamilyPileConfigurator *_facePileConfigurator;
    SPTTableView *_tableView;
    GLUEGradientView *_gradientView;
    SPTHomeMixUserToggleCellConfigurator *_cellConfigurator;
}

@property(retain, nonatomic) SPTHomeMixUserToggleCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTHomeMixFamilyPileConfigurator *facePileConfigurator; // @synthesize facePileConfigurator=_facePileConfigurator;
@property(retain, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTHomeMixUserToggleViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 theme:(id)arg2 facePileConfigurator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

