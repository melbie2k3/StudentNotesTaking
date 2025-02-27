// Objective-C API for talking to github.com/theHaL253/StudentNotesTaking/pkg/logger Go package.
//   gobind -lang=objc github.com/theHaL253/StudentNotesTaking/pkg/logger
//
// File is generated by gobind. Do not edit.

#ifndef __Logger_H__
#define __Logger_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol LoggerStater;
@class LoggerStater;

@protocol LoggerStater <NSObject>
- (NSData* _Nullable)current;
- (NSData* _Nullable)entryCreate:(NSString* _Nullable)text color:(int64_t)color;
- (NSData* _Nullable)entryDelete:(int64_t)id_;
- (NSData* _Nullable)entrySearch:(NSString* _Nullable)query;
- (NSData* _Nullable)entryUpdate:(int64_t)id_ text:(NSString* _Nullable)text color:(int64_t)color;
@end

/**
 * New returns and implementation of the state interface.
 */
FOUNDATION_EXPORT id<LoggerStater> _Nullable LoggerNew(NSString* _Nullable kind, NSString* _Nullable name);

/**
 * Version returns the current version of the framework.
 */
FOUNDATION_EXPORT NSString* _Nonnull LoggerVersion(void);

@class LoggerStater;

/**
 * Stater is a alias to the state package which is otherwise invisible to the ios framework.
 */
@interface LoggerStater : NSObject <goSeqRefInterface, LoggerStater> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (NSData* _Nullable)current;
- (NSData* _Nullable)entryCreate:(NSString* _Nullable)text color:(int64_t)color;
- (NSData* _Nullable)entryDelete:(int64_t)id_;
- (NSData* _Nullable)entrySearch:(NSString* _Nullable)query;
- (NSData* _Nullable)entryUpdate:(int64_t)id_ text:(NSString* _Nullable)text color:(int64_t)color;
@end

#endif
