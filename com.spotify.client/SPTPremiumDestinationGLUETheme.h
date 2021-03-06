//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUECollectionViewStyle, SPTPremiumDestinationCarouselStyle, SPTPremiumDestinationCtaStyle, SPTPremiumDestinationCurrentPlanStyle, SPTPremiumDestinationFlexboxButtonStyle, SPTPremiumDestinationFlexboxLegalTextStyle, SPTPremiumDestinationFlexboxSubtitleStyle, SPTPremiumDestinationFlexboxTitleStyle, SPTPremiumDestinationHeaderTitleStyle, SPTPremiumDestinationLegalTextStyle, SPTPremiumDestinationOfferCardStyle, SPTPremiumDestinationOfferDescriptionStyle, SPTPremiumDestinationOfferTitlePricePeriodStyle, SPTPremiumDestinationOfferTitleStyle, SPTPremiumDestinationValueCardStyle, SPTPremiumDestinationValueComparisonCardStyle;
@protocol GLUEStyle;

@interface SPTPremiumDestinationGLUETheme : GLUEThemeBase
{
}

@property(readonly, copy, nonatomic) SPTPremiumDestinationFlexboxLegalTextStyle *flexboxLegalTextStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationFlexboxSubtitleStyle *flexboxSubtitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationFlexboxButtonStyle *flexboxButtonStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationFlexboxTitleStyle *flexboxTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationHeaderTitleStyle *headerTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationCtaStyle<GLUEStyle> *offerCtaStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationOfferTitlePricePeriodStyle<GLUEStyle> *offerTitlePricePeriodStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationOfferTitleStyle<GLUEStyle> *offerTitleStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationOfferDescriptionStyle<GLUEStyle> *offerDescriptionStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationOfferCardStyle<GLUEStyle> *offerCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationCurrentPlanStyle<GLUEStyle> *currentPlanStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationValueCardStyle *valueCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationValueComparisonCardStyle<GLUEStyle> *valueComparisonCardStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationCarouselStyle<GLUEStyle> *carouselStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationLegalTextStyle<GLUEStyle> *legalTextStyle;
@property(readonly, copy, nonatomic) SPTPremiumDestinationCtaStyle<GLUEStyle> *primaryCtaStyle;
@property(readonly, copy, nonatomic) GLUECollectionViewStyle *premiumDestinationCollectionViewStyle;
- (double)offerCardComponentBottomContentEdgeMargin;
- (double)flexboxComponentVerticalMargin;
- (double)offerCardComponentVerticalMargin;

@end

