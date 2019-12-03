//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEAccessoryIconButton, NSString, SPTSpeakerCompanionResultsPageViewModel, UITableView;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTSpeakerCompanionResultsPageView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    GLUEAccessoryIconButton *_closeButton;
    SPTSpeakerCompanionResultsPageViewModel *_viewModel;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
}

@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTSpeakerCompanionResultsPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) GLUEAccessoryIconButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didTapDismissButton;
- (id)rowStyleFromModel:(id)arg1;
- (id)trailingAccessoryIconViewStlyeWithIcon:(long long)arg1;
- (void)setupLeadingCellAccessory:(id)arg1 forModel:(id)arg2;
- (void)setupTrailingCellAccessory:(id)arg1 trailingIcon:(long long)arg2;
- (void)setupEntityCellLabels:(id)arg1 forResult:(id)arg2;
- (id)otherResultsSectionHeaderView:(id)arg1;
- (id)nowPlayingSectionHeaderView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setupConstraints;
- (void)setupCloseButton;
- (void)setupTableView;
- (void)setupViews;
- (id)initWithCompanionResultsPageViewModel:(id)arg1 glueImageLoader:(id)arg2 glueTheme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
