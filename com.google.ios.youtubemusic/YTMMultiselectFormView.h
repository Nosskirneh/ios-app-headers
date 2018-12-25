//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMButton, UICollectionView, YTFormattedStringLabel, YTIMusicMultiselectFormRenderer, YTMMultiselectFormViewFlowLayout, YTQTMButton;
@protocol YTMMultiselectFormViewDelegate, YTResponder;

@interface YTMMultiselectFormView : UIView
{
    YTFormattedStringLabel *_headerLabel;
    YTFormattedStringLabel *_subheaderLabel;
    YTMMultiselectFormViewFlowLayout *_formViewFlowLayout;
    QTMButton *_proceedButton;
    YTQTMButton *_exitButton;
    id <YTMMultiselectFormViewDelegate> _delegate;
    id <YTResponder> _parentResponder;
    UICollectionView *_collectionView;
    YTIMusicMultiselectFormRenderer *_renderer;
}

@property(retain, nonatomic) YTIMusicMultiselectFormRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTMMultiselectFormViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapExit;
- (void)didTapProceed;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

@end
