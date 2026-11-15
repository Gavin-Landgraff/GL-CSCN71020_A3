#include "pch.h"
#include "CppUnitTest.h"

#include "..\GL-CSCN71020_A3\main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GavinLandgraffCSCN71020A3Test {
	TEST_CLASS(GavinLandgraffCSCN71020A3Test) {
		public:
		TEST_METHOD(Both_inputs_invalid) {
			char* p1 = "a";
			char* p2 = "b";

			char* result = rock_paper_scissors(p1, p2);
			char* expect_result = "Invalid";

			Assert::AreEqual(expect_result, result);
		}

		TEST_METHOD(Both_inputs_invalid_and_same) {
			char* p1 = "a";
			char* p2 = "a";

			char* result = rock_paper_scissors(p1, p2);
			char* expect_result = "Invalid";

			Assert::AreEqual(expect_result, result);
		}

		TEST_METHOD(First_input_invalid_second_rock) {
			char* player1 = "a";
			char* player2 = "Rock";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Second_input_invalid_first_rock) {
			char* player1 = "Rock";
			char* player2 = "b";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(First_input_invalid_second_paper) {
			char* player1 = "a";
			char* player2 = "Paper";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Second_input_invalid_first_paper) {
			char* player1 = "Paper";
			char* player2 = "b";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(First_input_invalid_second_scissors) {
			char* player1 = "a";
			char* player2 = "Scissors";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Second_input_invalid_first_scissors) {
			char* player1 = "Scissors";
			char* player2 = "b";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Draw_both_rock) {
			char* player1 = "Rock";
			char* player2 = "Rock";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Draw_both_paper) {
			char* player1 = "Paper";
			char* player2 = "Paper";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Draw_both_scissors) {
			char* player1 = "Scissors";
			char* player2 = "Scissors";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Player_1_wins_rock) {
			char* player1 = "Rock";
			char* player2 = "Scissors";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player_2_wins_rock) {
			char* player1 = "Scissors";
			char* player2 = "Rock";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(Player_1_wins_paper) {
			char* player1 = "Paper";
			char* player2 = "Rock";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player_2_wins_paper) {
			char* player1 = "Rock";
			char* player2 = "Paper";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(Player_1_wins_scissors) {
			char* player1 = "Scissors";
			char* player2 = "Paper";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player_2_wins_scissors) {
			char* player1 = "Paper";
			char* player2 = "Scissors";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(First_input_case_check_rock) {
			char* player1 = "RoCk";
			char* player2 = "rock";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(First_input_case_check_paper) {
			char* player1 = "pAPeR";
			char* player2 = "paper";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(First_input_case_check_scissors) {
			char* player1 = "SciSsoRs";
			char* player2 = "scissors";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Second_input_case_check_rock) {
			char* player1 = "rock";
			char* player2 = "RoCk";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Second_input_case_check_paper) {
			char* player1 = "paper";
			char* player2 = "pAPeR";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(Second_input_case_check_scissors) {
			char* player1 = "scissors";
			char* player2 = "SciSsoRs";

			char* result = rock_paper_scissors(player1, player2);

			Assert::AreEqual("Draw", result);
		}

	};
}
