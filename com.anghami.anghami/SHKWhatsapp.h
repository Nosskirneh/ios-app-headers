//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class NSString, PHObjectPlaceholder, UIDocumentInteractionController;

@interface SHKWhatsapp : SHKSharer <UIDocumentInteractionControllerDelegate>
{
    SHKWhatsapp *_selfRef;
    UIDocumentInteractionController *_documentationInteractionController;
    UIDocumentInteractionController *_documentInteractionController;
    PHObjectPlaceholder *_placeholderAsset;
}

+ (_Bool)canShare;
+ (id)sharerTitle;
+ (id)sharerIcon;
@property(retain, nonatomic) PHObjectPlaceholder *placeholderAsset; // @synthesize placeholderAsset=_placeholderAsset;
@property(retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(retain, nonatomic) UIDocumentInteractionController *documentationInteractionController; // @synthesize documentationInteractionController=_documentationInteractionController;
- (void).cxx_destruct;
- (id)buildWhatsappCaptionViewImageWithImage:(id)arg1;
- (void)copyTextToPasteBoard;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)shareItemImage;
- (void)shareItemVideo;
- (void)displaySettingsAlert;
- (void)downloadItemVideoAndShare;
- (_Bool)send;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

