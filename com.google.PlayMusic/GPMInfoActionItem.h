//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GPMInfoActionItem : NSObject
{
    NSString *_textKey;
    long long _actionItemType;
}

+ (id)itemWithTextKey:(id)arg1 actionType:(long long)arg2;
@property(nonatomic) long long actionItemType; // @synthesize actionItemType=_actionItemType;
@property(retain, nonatomic) NSString *textKey; // @synthesize textKey=_textKey;
- (void).cxx_destruct;
- (id)initWithTextKey:(id)arg1 actionType:(long long)arg2;

@end
