//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, SPTUpsell, SPTUpsellActionFactory, SPTUpsellPopupButtonViewModel, UIColor, UIImage;
@protocol SPTUpsellLogger;

@interface SPTUpsellOverlayViewModel : NSObject <UITextViewDelegate>
{
    SPTUpsell *_upsell;
    SPTUpsellActionFactory *_actionFactory;
    id <SPTUpsellLogger> _logger;
    UIImage *_iconImage;
    UIImage *_backgroundImage;
    SPTUpsellPopupButtonViewModel *_actionButton;
}

+ (id)imageFromFontIcon:(long long)arg1 size:(struct CGSize)arg2 tint:(id)arg3;
+ (id)imageForUpsellImage:(id)arg1 size:(struct CGSize)arg2 fontImageCreator:(CDUnknownBlockType)arg3 defaultImageCreator:(CDUnknownBlockType)arg4;
+ (id)defaultIconImageForSize:(struct CGSize)arg1;
@property(retain, nonatomic) SPTUpsellPopupButtonViewModel *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) id <SPTUpsellLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTUpsellActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) SPTUpsell *upsell; // @synthesize upsell=_upsell;
- (void).cxx_destruct;
- (id)versionFromUpsell:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
@property(readonly, nonatomic) _Bool shouldShowLegalText;
@property(readonly, nonatomic) _Bool shouldCleanupOnDemandAudio;
@property(readonly, nonatomic) _Bool shouldShowIcon;
@property(readonly, nonatomic) _Bool shouldShowBackground;
@property(readonly, nonatomic) _Bool shouldShowMessage;
@property(readonly, nonatomic) _Bool shouldShowTitle;
@property(readonly, nonatomic) _Bool shouldShowHeading;
- (id)legalAttributedTextForTheme:(id)arg1;
@property(readonly, copy, nonatomic) NSString *headingIcon;
@property(readonly, copy, nonatomic) NSString *upsellVersion;
@property(readonly, copy, nonatomic) NSString *upsellIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedCloseTitle;
@property(readonly, copy, nonatomic) NSString *localizedMessage;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *localizedHeading;
@property(readonly, nonatomic) UIColor *dominantColor;
- (void)logDismissAction:(id)arg1;
- (void)userInterfaceWasPresented;
- (id)initWithUpsell:(id)arg1 actionFactory:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

