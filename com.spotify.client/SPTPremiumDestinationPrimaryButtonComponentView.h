//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGS2ButtonComponentView.h"

@class SPTPremiumDestinationGLUETheme;

@interface SPTPremiumDestinationPrimaryButtonComponentView : EXP_HUGS2ButtonComponentView
{
    SPTPremiumDestinationGLUETheme *_premiumDestinationTheme;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 premiumDestinationTheme:(id)arg3;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *premiumDestinationTheme; // @synthesize premiumDestinationTheme=_premiumDestinationTheme;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 premiumDestinationTheme:(id)arg2;

@end

