//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXSmartPairingBaseCell.h"

#import "MDXPairingCodeTextFieldViewDelegate-Protocol.h"

@class MDXPairingCodeTextFieldView, MDXScreenManager, NSString, UIActivityIndicatorView, UIImageView, YTButton;
@protocol MDXScreen, MDXSmartPairingInputTVCodeCellDelegate;

@interface MDXSmartPairingInputTVCodeCell : MDXSmartPairingBaseCell <MDXPairingCodeTextFieldViewDelegate>
{
    MDXScreenManager *_screenManager;
    id <MDXScreen> _screen;
    MDXPairingCodeTextFieldView *_pairingCodeTextFieldView;
    UIActivityIndicatorView *_spinner;
    UIImageView *_pairingCodeValidityIndicator;
    YTButton *_bottomButton;
    id <MDXSmartPairingInputTVCodeCellDelegate> _TVCodeCellDelegate;
}

@property(nonatomic) __weak id <MDXSmartPairingInputTVCodeCellDelegate> TVCodeCellDelegate; // @synthesize TVCodeCellDelegate=_TVCodeCellDelegate;
- (void).cxx_destruct;
- (void)didFetchScreen:(id)arg1 withPairingCode:(id)arg2;
- (void)didPressButton:(id)arg1;
- (void)textFieldDidChangeWithPairingCode:(id)arg1 full:(_Bool)arg2;
- (void)setScreenManager:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
