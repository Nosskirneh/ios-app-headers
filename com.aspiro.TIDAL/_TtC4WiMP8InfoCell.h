//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP13TableViewCell.h"

@class _TtC4WiMP15TopAlignedLabel, _TtC4WiMP9LinkLabel;

@interface _TtC4WiMP8InfoCell : _TtC4WiMP13TableViewCell
{
    // Error parsing type: , name: keyLabel
    // Error parsing type: , name: valueLabel
    // Error parsing type: , name: displayBorder
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
@property(nonatomic) _Bool displayBorder; // @synthesize displayBorder;
@property(nonatomic) __weak _TtC4WiMP9LinkLabel *valueLabel; // @synthesize valueLabel;
@property(nonatomic) __weak _TtC4WiMP15TopAlignedLabel *keyLabel; // @synthesize keyLabel;

@end

