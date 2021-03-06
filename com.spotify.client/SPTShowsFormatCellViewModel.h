//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEAccessoryIconButtonStyle, GLUETrackMultipleAccessoriesViewStyle, NSString, NSURL, UIColor;
@protocol GLUEStyle;

@interface SPTShowsFormatCellViewModel : NSObject
{
    _Bool _disabled;
    _Bool _explicit;
    _Bool _showQuickActions;
    NSString *_title;
    NSString *_subtitle;
    long long _status;
    long long _icon;
    UIColor *_iconColor;
    NSURL *_imageURL;
    NSURL *_videoThumbnailURL;
    NSString *_sourceName;
    NSURL *_sourceLink;
    id <GLUEStyle> _rowStyle;
    GLUEAccessoryIconButtonStyle *_contextMenuAccessoryButtonStyle;
    GLUETrackMultipleAccessoriesViewStyle *_trackMultipleAccessoriesStyle;
    CDUnknownBlockType _showContextMenu;
    CDUnknownBlockType _likeQuickAction;
    CDUnknownBlockType _banQuickAction;
}

@property(copy, nonatomic) CDUnknownBlockType banQuickAction; // @synthesize banQuickAction=_banQuickAction;
@property(copy, nonatomic) CDUnknownBlockType likeQuickAction; // @synthesize likeQuickAction=_likeQuickAction;
@property(copy, nonatomic) CDUnknownBlockType showContextMenu; // @synthesize showContextMenu=_showContextMenu;
@property(retain, nonatomic) GLUETrackMultipleAccessoriesViewStyle *trackMultipleAccessoriesStyle; // @synthesize trackMultipleAccessoriesStyle=_trackMultipleAccessoriesStyle;
@property(retain, nonatomic) GLUEAccessoryIconButtonStyle *contextMenuAccessoryButtonStyle; // @synthesize contextMenuAccessoryButtonStyle=_contextMenuAccessoryButtonStyle;
@property(retain, nonatomic) id <GLUEStyle> rowStyle; // @synthesize rowStyle=_rowStyle;
@property(retain, nonatomic) NSURL *sourceLink; // @synthesize sourceLink=_sourceLink;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSURL *videoThumbnailURL; // @synthesize videoThumbnailURL=_videoThumbnailURL;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool showQuickActions; // @synthesize showQuickActions=_showQuickActions;
@property(nonatomic) _Bool explicit; // @synthesize explicit=_explicit;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;

@end

