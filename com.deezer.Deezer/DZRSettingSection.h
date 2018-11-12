//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DZRSettingSection : NSObject
{
    NSString *_header;
    NSArray *_rows;
    NSString *_footer;
    unsigned long long _sectionIdentifier;
}

+ (id)sectionWithRows:(id)arg1 header:(id)arg2 footer:(id)arg3 sectionId:(unsigned long long)arg4;
+ (id)sectionWithRows:(id)arg1 header:(id)arg2 footer:(id)arg3;
+ (id)sectionWithRows:(id)arg1 sectionId:(unsigned long long)arg2;
+ (id)sectionWithRows:(id)arg1;
@property(nonatomic) unsigned long long sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)initWithRows:(id)arg1 header:(id)arg2 footer:(id)arg3;

@end
