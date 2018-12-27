//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CollectionViewCell.h"

@class ImageSwappingView, UIImageView, UILabel;

@interface SocialRelationshipCell : CollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UILabel *_relationshipCountLabel;
    ImageSwappingView *_avatarImageView;
    UIImageView *_proBadgeImageView;
}

@property(nonatomic) __weak UIImageView *proBadgeImageView; // @synthesize proBadgeImageView=_proBadgeImageView;
@property(nonatomic) __weak ImageSwappingView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *relationshipCountLabel; // @synthesize relationshipCountLabel=_relationshipCountLabel;
@property(nonatomic) __weak UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

