//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZRMarkupAttribute : NSObject
{
    unsigned long long _style;
    struct _NSRange _range;
}

+ (id)attributeWithStyle:(unsigned long long)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)description;

@end

