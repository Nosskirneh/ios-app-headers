//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class Card, GPMCardViewModel;
@protocol CardDelegate;

@interface CardCollectionViewCell : UICollectionViewCell
{
    Card *_card;
}

@property(retain, nonatomic) Card *card; // @synthesize card=_card;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CardDelegate> delegate;
@property(retain, nonatomic) GPMCardViewModel *viewModel;
- (void)layoutSubviews;

@end

