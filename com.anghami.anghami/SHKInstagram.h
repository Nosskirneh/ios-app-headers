//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

#import "ANGAsyncImageViewDelegate-Protocol.h"
#import "ANGOptionsSelectorDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "VideoReportingDelegate-Protocol.h"

@class ANGOptionsSelector, NSString, PHObjectPlaceholder, UIDocumentInteractionController;

@interface SHKInstagram : SHKSharer <VideoReportingDelegate, ANGOptionsSelectorDelegate, UIDocumentInteractionControllerDelegate, ANGAsyncImageViewDelegate>
{
    _Bool _isSharingUserVideo;
    UIDocumentInteractionController *_dic;
    SHKInstagram *_selfRef;
    PHObjectPlaceholder *_placeholderAsset;
    ANGOptionsSelector *_selector;
}

+ (_Bool)canShare;
+ (void)setIsSharingToStory:(_Bool)arg1;
+ (id)sharerTitle;
+ (id)sharerIcon;
@property _Bool isSharingUserVideo; // @synthesize isSharingUserVideo=_isSharingUserVideo;
@property(retain, nonatomic) ANGOptionsSelector *selector; // @synthesize selector=_selector;
@property(retain, nonatomic) PHObjectPlaceholder *placeholderAsset; // @synthesize placeholderAsset=_placeholderAsset;
@property(retain, nonatomic) SHKInstagram *selfRef; // @synthesize selfRef=_selfRef;
@property(retain, nonatomic) UIDocumentInteractionController *dic; // @synthesize dic=_dic;
- (void).cxx_destruct;
- (id)selectorOptions;
- (id)optionsForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfRowsForSection:(unsigned long long)arg1;
- (id)optionsSelectorTitleForSection:(unsigned long long)arg1;
- (unsigned long long)optionsSelectorNumberOfSections;
- (void)optionSelected:(id)arg1 valueChanged:(unsigned long long)arg2;
- (void)showOptionSelector;
- (void)displaySettingsAlert;
- (void)displayErrorAlertOrFallbackToImage;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (id)generateImageData:(id)arg1;
- (id)imageByScalingImage:(id)arg1 proportionallyToSize:(struct CGSize)arg2;
- (double)maxPhotoSize;
- (id)InstagramText;
- (void)copyInstagramCaptionToPasteboard;
- (void)sendImageOnInstagram:(id)arg1;
- (void)downloadVideo:(id)arg1;
- (void)sendVideoOnInstagram:(id)arg1;
- (void)didMixVideoInPath:(id)arg1;
- (_Bool)allowsLinkSharingForUserVideo;
- (void)backgroundImage:(id)arg1 stickerImage:(id)arg2 attributionURL:(id)arg3;
- (void)createStoryPost;
- (void)createFeedPost;
- (void)askFeedOrStory;
- (void)performActivity:(_Bool)arg1;
- (_Bool)send;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

