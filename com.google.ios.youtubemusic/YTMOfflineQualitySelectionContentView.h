//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, YTIOfflineabilityRenderer_Format;

@interface YTMOfflineQualitySelectionContentView : UIView
{
    NSArray *_formatViews;
    YTIOfflineabilityRenderer_Format *_selectedFormat;
}

@property(readonly, nonatomic) YTIOfflineabilityRenderer_Format *selectedFormat; // @synthesize selectedFormat=_selectedFormat;
- (void).cxx_destruct;
- (void)didTapRadioButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithOfflineabilityRenderer:(id)arg1;

@end

