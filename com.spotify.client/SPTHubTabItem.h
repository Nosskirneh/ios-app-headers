//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTHubTabItem : NSObject
{
    NSString *_title;
    NSString *_blockIdentifier;
}

@property(readonly, copy, nonatomic) NSString *blockIdentifier; // @synthesize blockIdentifier=_blockIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 blockIdentifier:(id)arg2;

@end

