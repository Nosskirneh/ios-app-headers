//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface ANGRequestPreviewTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_arrowImageView;
    UIImageView *_dotImageView;
    UIView *_separatorView;
}

@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)followRequestsSeenChanged;
- (void)followRequestsChanged;
- (void)hideUnreadDot:(_Bool)arg1;
- (void)updateCountLabel:(long long)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

