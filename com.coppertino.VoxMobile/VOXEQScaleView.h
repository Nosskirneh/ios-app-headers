//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;
@protocol VOXEQScaleDataSource;

@interface VOXEQScaleView : UIView
{
    NSDictionary *_stringAttributes;
    id <VOXEQScaleDataSource> _dataSource;
}

@property(nonatomic) id <VOXEQScaleDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

