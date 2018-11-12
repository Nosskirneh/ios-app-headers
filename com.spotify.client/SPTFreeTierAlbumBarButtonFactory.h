//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTContextMenuActionsProvider, SPTContextMenuPresenterFactory, SPTLogCenter;

@interface SPTFreeTierAlbumBarButtonFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _contextMenuActionFactory;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionFactory; // @synthesize contextMenuActionFactory=_contextMenuActionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (id)createContextMenuButtonViewModelForViewURI:(id)arg1 albumViewModel:(id)arg2;
- (id)createHeartBanButtonViewModelForViewURI:(id)arg1;
- (id)initWithCollectionConfiguration:(id)arg1 collectionPlatform:(id)arg2 contextMenuPresenterFactory:(id)arg3 contextMenuActionFactory:(id)arg4 logCenter:(id)arg5;

@end

