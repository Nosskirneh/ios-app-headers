//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString;

@interface TalkDescriptionCell : UITableViewCell
{
    NSAttributedString *_descriptionText;
    struct UIEdgeInsets _descriptionInsets;
}

@property(nonatomic) struct UIEdgeInsets descriptionInsets; // @synthesize descriptionInsets=_descriptionInsets;
@property(retain, nonatomic) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)frameForDescriptionText;
@property(nonatomic) unsigned long long numberOfLines;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

