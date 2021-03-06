//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;

@interface InvoiceCell : UITableViewCell
{
    UIView *horizontalBevel;
    UIView *verticalBevel;
    UILabel *invoiceLabel;
    UILabel *totalLabel;
    UILabel *invoiceNo;
    UILabel *purchaseDate;
    UILabel *productDurNo;
    UILabel *productDurPeriod;
    UILabel *autoRenewLabel;
    UIButton *detailButton;
    UILabel *chargeRate;
    UILabel *totalAmount;
    UIView *_card;
}

@property(retain, nonatomic) UIView *card; // @synthesize card=_card;
@property(retain) UILabel *totalAmount; // @synthesize totalAmount;
@property(retain) UILabel *chargeRate; // @synthesize chargeRate;
@property(retain) UIButton *detailButton; // @synthesize detailButton;
@property(retain) UILabel *autoRenewLabel; // @synthesize autoRenewLabel;
@property(retain) UILabel *productDurPeriod; // @synthesize productDurPeriod;
@property(retain) UILabel *productDurNo; // @synthesize productDurNo;
@property(retain) UILabel *purchaseDate; // @synthesize purchaseDate;
@property(retain) UILabel *invoiceNo; // @synthesize invoiceNo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

