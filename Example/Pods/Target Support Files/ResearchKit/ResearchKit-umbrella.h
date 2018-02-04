#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ORKVideoInstructionStep.h"
#import "ORKWaitStep.h"
#import "ORKStepNavigationRule.h"
#import "ORKReviewStep.h"
#import "ORKNavigableOrderedTask.h"
#import "ORKDiscreteGraphChartView.h"
#import "ORKStep.h"
#import "ORKAnswerFormat.h"
#import "ORKRecorder.h"
#import "ORKFormStepViewController.h"
#import "ORKResult.h"
#import "ORKInstructionStepViewController.h"
#import "ORKTypes.h"
#import "ORKCollector.h"
#import "ORKWaitStepViewController.h"
#import "ORKSignatureStep.h"
#import "ORKStepViewController.h"
#import "ORKActiveStepViewController.h"
#import "ORKPageStepViewController.h"
#import "ORKFormStep.h"
#import "ORKRegistrationStep.h"
#import "ORKContinueButton.h"
#import "ORKDefines.h"
#import "ORKInstructionStep.h"
#import "ORKTableStepViewController.h"
#import "ORKChartTypes.h"
#import "ORKVerificationStep.h"
#import "ORKConsentSection.h"
#import "ORKPasscodeViewController.h"
#import "ORKBarGraphChartView.h"
#import "ORKLineGraphChartView.h"
#import "ResearchKit.h"
#import "ORKTaskViewController.h"
#import "ORKActiveStep.h"
#import "ORKGraphChartView.h"
#import "ORKTextButton.h"
#import "ORKCompletionStepViewController.h"
#import "ORKVisualConsentStep.h"
#import "ORKPasscodeStep.h"
#import "ORKDataCollectionManager.h"
#import "ORKKeychainWrapper.h"
#import "ORKConsentSharingStep.h"
#import "ORKQuestionStep.h"
#import "ORKPageStep.h"
#import "ORKImageCaptureStep.h"
#import "ORKTouchAnywhereStep.h"
#import "ORKBorderedButton.h"
#import "ORKHealthAnswerFormat.h"
#import "ORKTableStep.h"
#import "ORKPieChartView.h"
#import "ORKOrderedTask.h"
#import "ORKNavigablePageStep.h"
#import "ORKLoginStepViewController.h"
#import "ORKResultPredicate.h"
#import "ORKVerificationStepViewController.h"
#import "ORKConsentReviewStep.h"
#import "ORKTask.h"
#import "ORKConsentSignature.h"
#import "ORKTouchAnywhereStepViewController.h"
#import "ORKDeprecated.h"
#import "ORKLoginStep.h"
#import "ORKVideoCaptureStep.h"
#import "ORKConsentDocument.h"
#import "ORKAnswerFormat_Private.h"
#import "ORKAudioRecorder.h"
#import "ORKReactionTimeStep.h"
#import "ORKCustomStepView.h"
#import "ORKHolePegTestRemoveStep.h"
#import "ORKDataLogger.h"
#import "ORKStroopStepViewController.h"
#import "ORKTimedWalkStep.h"
#import "ORKToneAudiometryStepViewController.h"
#import "ORKStepNavigationRule_Private.h"
#import "ORKReviewStepViewController.h"
#import "ORKVideoInstructionStepViewController.h"
#import "ORKCountdownStep.h"
#import "ORKLocationRecorder.h"
#import "ORKStroopStep.h"
#import "ORKToneAudiometryPracticeStepViewController.h"
#import "ResearchKit_Private.h"
#import "ORKHolePegTestPlaceStep.h"
#import "ORKQuestionStepViewController_Private.h"
#import "ORKShoulderRangeOfMotionStep.h"
#import "ORKOrderedTask_Private.h"
#import "ORKConsentSection_Private.h"
#import "ORKTimedWalkStepViewController.h"
#import "ORKAccelerometerRecorder.h"
#import "ORKHelpers_Private.h"
#import "ORKPedometerRecorder.h"
#import "ORKConsentSharingStepViewController.h"
#import "ORKQuestionStepViewController.h"
#import "ORKVisualConsentStepViewController.h"
#import "ORKPasscodeStepViewController.h"
#import "ORKWalkingTaskStep.h"
#import "ORKToneAudiometryPracticeStep.h"
#import "ORKSpatialSpanMemoryStep.h"
#import "ORKAudioStepViewController.h"
#import "ORKRecorder_Private.h"
#import "ORKTouchRecorder.h"
#import "ORKTowerOfHanoiStep.h"
#import "ORKHolePegTestRemoveStepViewController.h"
#import "ORKPSATStepViewController.h"
#import "ORKCompletionStep.h"
#import "ORKSignatureStepViewController.h"
#import "ORKCountdownStepViewController.h"
#import "ORKConsentReviewStepViewController.h"
#import "ORKFitnessStepViewController.h"
#import "ORKFitnessStep.h"
#import "ORKRangeOfMotionStep.h"
#import "ORKHealthQuantityTypeRecorder.h"
#import "ORKTaskViewController_Private.h"
#import "ORKTappingIntervalStepViewController.h"
#import "ORKDeviceMotionRecorder.h"
#import "ORKAudioLevelNavigationRule.h"
#import "ORKWalkingTaskStepViewController.h"
#import "ORKPageStep_Private.h"
#import "ORKPSATStep.h"
#import "ORKResult_Private.h"
#import "ORKTrailmakingStep.h"
#import "ORKErrors.h"
#import "ORKToneAudiometryStep.h"
#import "ORKHolePegTestPlaceStepViewController.h"
#import "ORKSpatialSpanMemoryStepViewController.h"
#import "ORKTappingIntervalStep.h"
#import "ORKImageCaptureStepViewController.h"
#import "ORKAudioStep.h"

FOUNDATION_EXPORT double ResearchKitVersionNumber;
FOUNDATION_EXPORT const unsigned char ResearchKitVersionString[];

