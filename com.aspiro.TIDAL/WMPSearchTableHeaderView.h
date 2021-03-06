//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface WMPSearchTableHeaderView : UIView
{
    NSString *_header;
    CDUnknownBlockType _viewMoreCallback;
    NSString *_accessibilityString;
    UIButton *_viewMoreButton;
    UILabel *_headerLabel;
}

+ (double)headerHeight;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIButton *viewMoreButton; // @synthesize viewMoreButton=_viewMoreButton;
@property(retain, nonatomic) NSString *accessibilityString; // @synthesize accessibilityString=_accessibilityString;
@property(copy, nonatomic) CDUnknownBlockType viewMoreCallback; // @synthesize viewMoreCallback=_viewMoreCallback;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)viewDidTap:(id)arg1;
- (void)removeViewMoreButton;
- (void)awakeFromNib;

@end

