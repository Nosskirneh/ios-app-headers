//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SPTFreeTierAllSongsViewModel;
@protocol SPContextMenuActionsFactory, SPTContextMenuOptionsFactory, SPTContextMenuPresenter, SPTContextMenuPresenterFactory;

@interface SPTFreeTierAllSongsContextMenuPresenter : NSObject
{
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPContextMenuActionsFactory> _contextMenuActionsFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    SPTFreeTierAllSongsViewModel *_viewModel;
    NSURL *_viewURI;
    id <SPTContextMenuPresenter> _presenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) SPTFreeTierAllSongsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> contextMenuActionsFactory; // @synthesize contextMenuActionsFactory=_contextMenuActionsFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
- (void).cxx_destruct;
- (void)presentContextMenuAtIndexPath:(id)arg1 fromView:(id)arg2;
- (id)initWithViewURI:(id)arg1 contextMenuPresenterFactory:(id)arg2 contextMenuOptionsFactory:(id)arg3 contextMenuActionsFactory:(id)arg4 viewModel:(id)arg5;

@end

