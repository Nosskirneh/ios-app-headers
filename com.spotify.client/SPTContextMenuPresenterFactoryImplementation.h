//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenterFactory-Protocol.h"

@class NSString;
@protocol SPTContextMenuViewControllerFactory;

@interface SPTContextMenuPresenterFactoryImplementation : NSObject <SPTContextMenuPresenterFactory>
{
    _Bool _runningOnIphone;
    id <SPTContextMenuViewControllerFactory> _contextMenuViewControllerFactory;
}

@property(readonly, nonatomic, getter=isRunningOnIphone) _Bool runningOnIphone; // @synthesize runningOnIphone=_runningOnIphone;
@property(readonly, nonatomic) id <SPTContextMenuViewControllerFactory> contextMenuViewControllerFactory; // @synthesize contextMenuViewControllerFactory=_contextMenuViewControllerFactory;
- (void).cxx_destruct;
- (id)contextMenuPresenterForHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 options:(id)arg4;
- (id)contextMenuPresenterForTrackWithTrackURL:(id)arg1 trackName:(id)arg2 trackMetadata:(id)arg3 playable:(_Bool)arg4 imageURL:(id)arg5 artists:(id)arg6 albumName:(id)arg7 albumURL:(id)arg8 viewURL:(id)arg9 contextSourceURL:(id)arg10 metadataTitle:(id)arg11 logContextIphone:(id)arg12 logContextIpad:(id)arg13 senderView:(id)arg14 options:(id)arg15 extraTasks:(id)arg16;
- (id)contextMenuPresenterForTrackWithTrackURL:(id)arg1 trackName:(id)arg2 trackMetadata:(id)arg3 playable:(_Bool)arg4 imageURL:(id)arg5 artists:(id)arg6 albumName:(id)arg7 albumURL:(id)arg8 viewURL:(id)arg9 contextSourceURL:(id)arg10 metadataTitle:(id)arg11 logContextIphone:(id)arg12 logContextIpad:(id)arg13 senderView:(id)arg14 options:(id)arg15;
- (id)contextMenuPresenterForHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 actions:(id)arg7 entityURL:(id)arg8 trackURL:(id)arg9 headerSubtitleStyle:(long long)arg10 senderView:(id)arg11 options:(id)arg12;
- (id)contextMenuPresenterForHeaderImageURL:(id)arg1 headerImagePlaceholder:(id)arg2 imageStyle:(long long)arg3 title:(id)arg4 subtitle:(id)arg5 metadataTitle:(id)arg6 tasks:(id)arg7 entityURL:(id)arg8 trackURL:(id)arg9 headerSubtitleStyle:(long long)arg10 senderView:(id)arg11 options:(id)arg12;
- (id)initWithContextMenuViewControllerFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

