//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, UILabel;

@interface DZRLyricsCopyrightFooterCollectionReusableView : UICollectionReusableView
{
    UILabel *_infosLabel;
    UILabel *_copyrightLabel;
    UILabel *_writersLabel;
    NSLayoutConstraint *_infosLabelLeadingToSuperviewConstraint;
    NSLayoutConstraint *_copyrightLabelLeadingToSuperviewConstraint;
    NSLayoutConstraint *_writersLabelLeadingToSuperviewConstraint;
    NSLayoutConstraint *_infosLabelTrailingToSuperviewConstraint;
    NSLayoutConstraint *_copyrightLabelTrailingToSuperviewConstraint;
    NSLayoutConstraint *_writersLabelTrailingToSuperviewConstraint;
    NSLayoutConstraint *_infosLabelTopToSuperviewVerticalSpacing;
    NSLayoutConstraint *_infosLabelBottomToCopyrightLabelTopVerticalSpacing;
    NSLayoutConstraint *_copyrightLabelBottomToWritersLabelTopVerticalSpacing;
}

@property(retain, nonatomic) NSLayoutConstraint *copyrightLabelBottomToWritersLabelTopVerticalSpacing; // @synthesize copyrightLabelBottomToWritersLabelTopVerticalSpacing=_copyrightLabelBottomToWritersLabelTopVerticalSpacing;
@property(retain, nonatomic) NSLayoutConstraint *infosLabelBottomToCopyrightLabelTopVerticalSpacing; // @synthesize infosLabelBottomToCopyrightLabelTopVerticalSpacing=_infosLabelBottomToCopyrightLabelTopVerticalSpacing;
@property(retain, nonatomic) NSLayoutConstraint *infosLabelTopToSuperviewVerticalSpacing; // @synthesize infosLabelTopToSuperviewVerticalSpacing=_infosLabelTopToSuperviewVerticalSpacing;
@property(retain, nonatomic) NSLayoutConstraint *writersLabelTrailingToSuperviewConstraint; // @synthesize writersLabelTrailingToSuperviewConstraint=_writersLabelTrailingToSuperviewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *copyrightLabelTrailingToSuperviewConstraint; // @synthesize copyrightLabelTrailingToSuperviewConstraint=_copyrightLabelTrailingToSuperviewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *infosLabelTrailingToSuperviewConstraint; // @synthesize infosLabelTrailingToSuperviewConstraint=_infosLabelTrailingToSuperviewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *writersLabelLeadingToSuperviewConstraint; // @synthesize writersLabelLeadingToSuperviewConstraint=_writersLabelLeadingToSuperviewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *copyrightLabelLeadingToSuperviewConstraint; // @synthesize copyrightLabelLeadingToSuperviewConstraint=_copyrightLabelLeadingToSuperviewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *infosLabelLeadingToSuperviewConstraint; // @synthesize infosLabelLeadingToSuperviewConstraint=_infosLabelLeadingToSuperviewConstraint;
@property(retain, nonatomic) UILabel *writersLabel; // @synthesize writersLabel=_writersLabel;
@property(retain, nonatomic) UILabel *copyrightLabel; // @synthesize copyrightLabel=_copyrightLabel;
@property(retain, nonatomic) UILabel *infosLabel; // @synthesize infosLabel=_infosLabel;
- (void).cxx_destruct;
- (void)populateWithLyrics:(id)arg1;
- (void)awakeFromNib;

@end

