//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SwrveImage : NSObject
{
    NSString *file;
    struct CGSize size;
    struct CGPoint center;
}

@property struct CGPoint center; // @synthesize center;
@property struct CGSize size; // @synthesize size;
@property(retain, nonatomic) NSString *file; // @synthesize file;
- (void).cxx_destruct;

@end
