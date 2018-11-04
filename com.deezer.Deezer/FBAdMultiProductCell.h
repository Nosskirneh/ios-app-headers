//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdBlurredImageViewDelegate-Protocol.h"
#import "FBAdScrollViewCell-Protocol.h"
#import "FBAdUpdatableView-Protocol.h"
#import "FBAdViewabilityValidatorDelegate-Protocol.h"

@class EAGLSharegroup, FBAdBlurredImageView, FBAdViewabilityValidator, FBNativeAdMultiProductDataModel, NSString;
@protocol FBAdMultiProductCellDelegate;

@interface FBAdMultiProductCell : UIView <FBAdViewabilityValidatorDelegate, FBAdScrollViewCell, FBAdBlurredImageViewDelegate, FBAdUpdatableView>
{
    _Bool _debugMode;
    FBNativeAdMultiProductDataModel *_content;
    FBAdBlurredImageView *_imageView;
    id <FBAdMultiProductCellDelegate> _delegate;
    FBAdViewabilityValidator *_viewabilityValidator;
    EAGLSharegroup *_eaglSharegroup;
}

+ (void)initialize;
@property(retain, nonatomic) EAGLSharegroup *eaglSharegroup; // @synthesize eaglSharegroup=_eaglSharegroup;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) FBAdViewabilityValidator *viewabilityValidator; // @synthesize viewabilityValidator=_viewabilityValidator;
@property(nonatomic) __weak id <FBAdMultiProductCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FBAdBlurredImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak FBNativeAdMultiProductDataModel *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)blurredImageViewDidLoad:(id)arg1;
- (void)updateCellWithData:(id)arg1;
- (void)dispatchClickedWithPosition:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (_Bool)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2;
- (void)gestureRecognizerTappedCell:(id)arg1;
- (void)updateView:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

